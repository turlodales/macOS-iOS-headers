//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSMutableArray;
@protocol VCMomentsMessenger;

__attribute__((visibility("hidden")))
@interface VCMomentsManagerStreamTokenClientList : NSObject
{
    long long _streamToken;
    id <VCMomentsMessenger> _messenger;
    NSMutableArray *_clientContextList;
}

+ (long long)streamTokenFromClientContext:(id)arg1;
+ (BOOL)isValidContext:(id)arg1;
@property(readonly, nonatomic) NSArray *clientContextList; // @synthesize clientContextList=_clientContextList;
@property(readonly, nonatomic) id <VCMomentsMessenger> messenger; // @synthesize messenger=_messenger;
- (void)dealloc;
- (void)removeContext:(id)arg1;
- (id)newContext;
- (id)initWithStreamToken:(long long)arg1 messenger:(id)arg2;

@end

