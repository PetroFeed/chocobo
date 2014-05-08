#import <Foundation/Foundation.h>
#import "AsyncObject.h"

@interface Collection : AsyncObject

@property (nonatomic, retain) NSMutableArray *models;

-(id)model;
-(NSString *) collectionEndpoint;
-(void) fetchWithParams:(NSDictionary *)params onSuccess:(void (^)(id responseObject))success onFailure:(void (^)(NSError* error))failure;
-(void)clearModels;
-(NSInteger)modelCount;
-(void)addModel:(id)model;
-(NSDictionary *)parse:(NSDictionary *) responseObject;
@end
