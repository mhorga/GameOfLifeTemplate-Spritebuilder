//
//  Grid.h
//  
//
//  Created by Marius Horga on 6/22/15.
//
//

#import "CCSprite.h"

@interface Grid : CCSprite

@property (nonatomic, assign) int totalAlive;
@property (nonatomic, assign) int generation;

-(void)evolveStep;
-(void)countNeighbors;
-(void)updateCreatures;

@end
