//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <Transparency/GPBMessage.h>

#import "TransparencyVerifiable.h"

@class NSMutableArray;

@interface MapLeaf : GPBMessage <TransparencyVerifiable>
{
}

+ (id)descriptor;
- (BOOL)verifyWithError:(id *)arg1;
- (id)recordForAccountId:(id)arg1 deviceIdVRFOutput:(id)arg2 appVersion:(unsigned long long)arg3 clientDataVRFoutput:(id)arg4;

// Remaining properties
@property(retain, nonatomic) NSMutableArray *accountsArray; // @dynamic accountsArray;
@property(readonly, nonatomic) unsigned long long accountsArray_Count; // @dynamic accountsArray_Count;

@end

