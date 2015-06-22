//
//  Creature.h
//  
//
//  Created by Marius Horga on 6/22/15.
//
//

#import "CCSprite.h"

@interface Creature : CCSprite

@property (nonatomic, assign) BOOL isAlive;
@property (nonatomic, assign) NSInteger livingNeighbors;

- (id)initCreature;

@end
