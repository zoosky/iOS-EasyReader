//
//  FeedItem.h
//  
//
//  Created by Michael Beattie on 3/11/14.
//
//

#import <Foundation/Foundation.h>
#import <CoreData/CoreData.h>
#import "CSBaseObject.h"

@class Feed;


#pragma mark - FeedItem -

/**
 * A single feed item in a feed
 */
@interface FeedItem : CSBaseObject


#pragma mark - Core Data Properties

/// The article title for this feed item
@property (nonatomic, retain) NSString * title;

/// The summary for this feed item
@property (nonatomic, retain) NSString * summary;

/// The time this feed item was updated
@property (nonatomic, retain) NSDate * updatedAt;

/// The time this feed item's article was published
@property (nonatomic, retain) NSDate * publishedAt;

/// The time this feed item was created
@property (nonatomic, retain) NSDate * createdAt;


@property (nonatomic, retain) NSString * image_iphone_retina;
@property (nonatomic, retain) NSString * image_ipad;
@property (nonatomic, retain) NSString * image_ipad_retina;

/// The article URL for this feed item
@property (nonatomic, retain) NSString * url;

/// This feed items remote API id
@property (nonatomic, retain) NSNumber * id;

/// The feed this item is in
@property (nonatomic, retain) Feed *feed;


#pragma mark - Properties

/// The appropriate headline for this article
@property (readonly) NSString *headline;


#pragma mark - API methods

/**
 * Requests new feed items from a group of feeds
 *
 * @param feeds
 * @param startAt
 * @param success A block to be run on API call success
 * @param failure A block to be run on API call failure
 */
+ (void) requestFeedItemsFromFeeds:(NSSet *)feeds
                             Since:(NSDate *)startAt
                           success:(APISuccessBlock)successBlock
                           failure:(APIFailureBlock)failureBlock;


@end
