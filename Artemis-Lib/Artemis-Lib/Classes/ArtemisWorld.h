/**
* c.f. http://code.google.com/p/artemis-framework/source/browse/src/com/artemis/World.java
*/

#import "ArtemisEntityManager.h"
#import "ArtemisComponentManager.h"

@interface ArtemisWorld : NSObject

@property (nonatomic) float delta;

@property(nonatomic,retain) ArtemisEntityManager* entityManager;
@property(nonatomic,retain) ArtemisComponentManager* componentManager;

-(void) initialize;

-(void) addEntity:(ArtemisEntity*) entity;
-(void) changedEntity:(ArtemisEntity*) entity;
-(void) deleteEntity:(ArtemisEntity*) entity;
-(void) enable:(ArtemisEntity*) entity;
-(void) disable:(ArtemisEntity*) entity;

@end