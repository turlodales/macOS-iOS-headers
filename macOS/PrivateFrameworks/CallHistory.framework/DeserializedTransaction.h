//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class CHRecentCall;

@interface DeserializedTransaction : NSObject
{
    CHRecentCall *_call;
    unsigned long long _type;
}

- (void).cxx_destruct;
@property unsigned long long type; // @synthesize type=_type;
@property(readonly, nonatomic) CHRecentCall *call; // @synthesize call=_call;
- (id)initWithCall:(id)arg1 andType:(unsigned long long)arg2;

@end

