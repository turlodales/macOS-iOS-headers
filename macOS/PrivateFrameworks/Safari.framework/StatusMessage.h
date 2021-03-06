//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString, NSURL;

__attribute__((visibility("hidden")))
@interface StatusMessage : NSObject
{
    NSURL *_url;
    NSString *_string;
}

+ (BOOL)isEmpty:(id)arg1;
+ (id)emptyMessage;
- (void).cxx_destruct;
@property(readonly, copy, nonatomic) NSString *string; // @synthesize string=_string;
@property(readonly, nonatomic) NSURL *url; // @synthesize url=_url;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)arg1;
@property(readonly, getter=isEmpty) BOOL empty;
- (id)initWithString:(id)arg1;
- (id)initWithURL:(id)arg1 string:(id)arg2;

@end

