//
//  User.h
//  EasyReader
//
//  Created by Joseph Lorich on 4/9/13.
//  Copyright (c) 2013 Cloudspace. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <CoreData/CoreData.h>

@class Feed;

@interface User : NSManagedObject

@property (nonatomic, retain) NSSet *feeds;
@property (nonatomic, retain) Feed *activeFeed;

/**
 * Returns the current user.
 * Creates a new one if none exist.
 */
+ (User *)current;

@end



@interface User (CoreDataGeneratedAccessors)

- (void)addFeedsObject:(Feed *)value;
- (void)removeFeedsObject:(Feed *)value;
- (void)addFeeds:(NSSet *)values;
- (void)removeFeeds:(NSSet *)values;

@end
