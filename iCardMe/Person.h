//
//  Person.h
//  iCardMe
//
//  Created by  on 20.03.12.
//  Copyright (c) 2012 __MyCompanyName__. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <CoreData/CoreData.h>

@class Card, Journal;

@interface Person : NSManagedObject

@property (nonatomic, retain) NSString * firstName;
@property (nonatomic, retain) NSString * lastName;
@property (nonatomic, retain) NSString * middleName;
@property (nonatomic, retain) NSSet *card;
@property (nonatomic, retain) NSSet *journal;
@end

@interface Person (CoreDataGeneratedAccessors)

- (void)addCardObject:(Card *)value;
- (void)removeCardObject:(Card *)value;
- (void)addCard:(NSSet *)values;
- (void)removeCard:(NSSet *)values;

- (void)addJournalObject:(Journal *)value;
- (void)removeJournalObject:(Journal *)value;
- (void)addJournal:(NSSet *)values;
- (void)removeJournal:(NSSet *)values;

@end
