//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <SAObjects/AceObject.h>

#import <SAObjects/SAAceComparable-Protocol.h>
#import <SAObjects/SAAceSerializable-Protocol.h>

@class NSNumber, NSString;

@interface SAEntryPoint : AceObject <SAAceSerializable, SAAceComparable>
{
}

+ (id)entryPointWithDictionary:(id)arg1 context:(id)arg2;
+ (id)entryPoint;
@property(copy, nonatomic) NSNumber *longitude;
@property(copy, nonatomic) NSNumber *latitude;
- (id)encodedClassName;
- (id)groupIdentifier;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

