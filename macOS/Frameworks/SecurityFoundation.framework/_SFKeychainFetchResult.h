//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSError;

@interface _SFKeychainFetchResult : NSObject
{
    id _keychainFetchResultInternal;
}

+ (id)fetchResultWithError:(id)arg1;
+ (id)fetchResultWithValue:(id)arg1;
- (void).cxx_destruct;
- (void)fetchValueWithAuthenticationContext:(id)arg1 resultHandler:(CDUnknownBlockType)arg2;
@property(readonly) NSError *error;
@property(readonly) id value;
@property(readonly) long long resultType;
- (id)initWithError:(id)arg1;
- (id)initWithValue:(id)arg1;

@end

