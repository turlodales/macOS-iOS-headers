//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class ISGenerationRequest;

@protocol ISIconCacheServiceProtocol <NSObject>
- (void)clearCacheWithCompletion:(void (^)(BOOL))arg1;
- (void)fetchImageDataWithGenerationRequest:(ISGenerationRequest *)arg1 completion:(void (^)(ISGenerationResponse *))arg2;
- (void)fetchCachePathWithCompletion:(void (^)(NSString *, NSString *))arg1;
@end

