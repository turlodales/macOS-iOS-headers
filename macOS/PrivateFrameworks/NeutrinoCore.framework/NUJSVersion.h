//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <NeutrinoCore/NUJSObject.h>

@class NUVersion;

@interface NUJSVersion : NUJSObject
{
}

- (id)toString;
- (id)valueForProperty:(id)arg1 context:(id)arg2 error:(out id *)arg3;
- (BOOL)hasProperty:(id)arg1;
@property(readonly, nonatomic) NUVersion *version;
- (id)initWithRepresentedObject:(id)arg1 context:(id)arg2;
- (id)initWithVersion:(id)arg1 context:(id)arg2;

@end

