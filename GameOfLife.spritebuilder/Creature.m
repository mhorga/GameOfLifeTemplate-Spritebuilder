//
//  Creature.m
//  
//
//  Created by Marius Horga on 6/22/15.
//
//

#import "Creature.h"

@implementation Creature

- (instancetype)initCreature {
    self = [super initWithImageNamed:@"GameOfLifeAssets/Assets/bubble.png"];
    if (self) {
        self.isAlive = NO;
    }
    return self;
}

- (void)setIsAlive:(BOOL)newState {
    _isAlive = newState;
    self.visible = _isAlive; // 'visible' is a CCNode property
}

@end
