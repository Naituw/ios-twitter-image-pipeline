//
//  TIPImageCache.h
//  TwitterImagePipeline
//
//  Created on 10/5/15.
//  Copyright © 2015 Twitter. All rights reserved.
//

#import <Foundation/Foundation.h>

@class TIPLRUCache;

NS_ASSUME_NONNULL_BEGIN

typedef NS_ENUM(NSInteger, TIPImageCacheType)
{
    TIPImageCacheTypeRendered,
    TIPImageCacheTypeMemory,
    TIPImageCacheTypeDisk,
};

#pragma mark - TIPImageCache

@protocol TIPImageCache <NSObject>
@property (nonatomic, readonly) TIPImageCacheType cacheType;
@property (nonatomic, readonly) TIPLRUCache *manifest;
@property (nonatomic, readonly) NSUInteger totalCost; // not thread safe!! Be careful...should only be used for debugging/testing
@end

NS_ASSUME_NONNULL_END
