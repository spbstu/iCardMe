//
//  Journal.h
//  iCardMe
//
//  Created by  on 20.03.12.
//  Copyright (c) 2012 __MyCompanyName__. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <CoreData/CoreData.h>

@class Card, Person;

@interface Journal : NSManagedObject

@property (nonatomic, retain) NSDate * dateTime;
@property (nonatomic, retain) NSSet *card;
@property (nonatomic, retain) NSSet *person;
@end

@interface Journal (CoreDataGeneratedAccessors)

- (void)addCardObject:(Card *)value;
- (void)removeCardObject:(Card *)value;
- (void)addCard:(NSSet *)values;
- (void)removeCard:(NSSet *)values;

- (void)addPersonObject:(Person *)value;
- (void)removePersonObject:(Person *)value;
- (void)addPerson:(NSSet *)values;
- (void)removePerson:(NSSet *)values;

@end
