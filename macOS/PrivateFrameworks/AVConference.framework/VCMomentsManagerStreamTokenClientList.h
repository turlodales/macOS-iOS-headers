//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSArray, NSMutableArray;

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

