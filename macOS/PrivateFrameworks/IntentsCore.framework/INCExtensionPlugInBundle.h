//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSSet;

__attribute__((visibility("hidden")))
@interface INCExtensionPlugInBundle : NSObject
{
    Class _principalClass;
    NSSet *_intentsSupported;
    NSSet *_intentsRestrictedWhileLocked;
}

- (void).cxx_destruct;
@property(readonly, copy, nonatomic) NSSet *intentsRestrictedWhileLocked; // @synthesize intentsRestrictedWhileLocked=_intentsRestrictedWhileLocked;
@property(readonly, copy, nonatomic) NSSet *intentsSupported; // @synthesize intentsSupported=_intentsSupported;
@property(readonly, nonatomic) Class principalClass; // @synthesize principalClass=_principalClass;
- (id)initWithPrincipalClass:(Class)arg1 intentsSupported:(id)arg2 intentsRestrictedWhileLocked:(id)arg3;

@end

