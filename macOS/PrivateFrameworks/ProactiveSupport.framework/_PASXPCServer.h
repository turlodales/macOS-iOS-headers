//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSArray;

@interface _PASXPCServer : NSObject
{
    NSArray *_XPCListeners;
}

+ (id)description;
+ (void)registerForService:(id)arg1 delegate:(id)arg2;
- (void).cxx_destruct;
- (void)registerXPCListeners;
- (id)initWithXPCListeners:(id)arg1 logHandle:(id)arg2;
- (id)init;

@end

