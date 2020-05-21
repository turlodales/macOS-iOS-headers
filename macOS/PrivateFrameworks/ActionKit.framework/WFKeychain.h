//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString;

@interface WFKeychain : NSObject
{
    NSString *_service;
    NSString *_accessGroup;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) NSString *accessGroup; // @synthesize accessGroup=_accessGroup;
@property(readonly, nonatomic) NSString *service; // @synthesize service=_service;
- (id)dataForKey:(id)arg1;
- (BOOL)setData:(id)arg1 forKey:(id)arg2;
- (id)items;
- (unsigned long long)numberOfItems;
- (id)initWithService:(id)arg1 accessGroup:(id)arg2;
- (id)initWithService:(id)arg1;

@end

