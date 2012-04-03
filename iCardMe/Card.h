//
//  Card.h
//  iCardMe
//
//  Created by  on 16.03.12.
//  Copyright (c) 2012 __MyCompanyName__. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <CoreData/CoreData.h>

@class Journal;

@interface Card : NSManagedObject

@property (nonatomic, retain) NSNumber * active;
@property (nonatomic, retain) NSString * number;
@property (nonatomic, retain) NSManagedObject *person;
@property (nonatomic, retain) NSSet *journal;
@end

@interface Card (CoreDataGeneratedAccessors)

- (void)addJournalObject:(Journal *)value;
- (void)removeJournalObject:(Journal *)value;
- (void)addJournal:(NSSet *)values;
- (void)removeJournal:(NSSet *)values;

@end
