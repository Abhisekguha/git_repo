import cv2

# initialize the camera
cap = cv2.VideoCapture(0)
cap.set(3, 640) # set the width of the camera frame to 640 pixels
cap.set(4, 480) # set the height of the camera frame to 480 pixels

# initialize the face detection model
face_cascade = cv2.CascadeClassifier(cv2.data.haarcascades + "haarcascade_frontalface_default.xml")

while True:
    # capture a frame from the camera
    ret, frame = cap.read()

    # convert the frame to grayscale for face detection
    gray = cv2.cvtColor(frame, cv2.COLOR_BGR2GRAY)

    # detect faces in the frame using the face detection model
    faces = face_cascade.detectMultiScale(gray, scaleFactor=1.3, minNeighbors=5)

    # draw a rectangle around each detected face
    for (x, y, w, h) in faces:
        cv2.rectangle(frame, (x, y), (x+w, y+h), (0, 255, 0), 2)

    # display the resulting frame
    cv2.imshow('Facial Recognition Camera', frame)

    # exit if the user presses the 'q' key
    if cv2.waitKey(1) & 0xFF == ord('q'):
        break

# release the camera and close the window
cap.release()
cv2.destroyAllWindows()
