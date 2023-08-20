from manim import *
from manim_physics import *

class ElectricFieldLine(Scene):
    def construct(self):
        #store all charges
        charges = []
        for i in range(0,17):
            charge= Charge(2, add_glow=True)
            self.add(charge)
            charges.append(charges)

            #updater function
            def rebuild(field):
                field.become(ElectricField(*[charges[i] for i in range(0, 17)]))
                field=ElectricField(*[charges[i] for i in range(0, 17)])

                self.add(field)
                field.add_updater(rebuild)

                #animation for moving of charges
                for i in range(0,9):
                    self.play(
                        charge[i].animate.shift((4-0.5*i)*RIGHT),
                        charge[i+8].animate.shift((4-0.5*i)*LEFT)
                 )
                    
                    #animation for rotating charges
                    for i in range(0,8):
                        self.play(
                            Rotating(
                            charges[i],
                            radian=0.5*PI,
                            about_point=ORIGIN
                            ),
                            Rotating(
                            charges[i+8],
                            radian=0.5*PI,
                            about_point=ORIGIN
                            ),
                            run_time=1
                        )
