//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCopying.h"
#import "WFNaming.h"
#import "WFSerializableContent.h"

@class NSString;

@interface WFEmailAddress : NSObject <NSCopying, WFNaming, WFSerializableContent>
{
    NSString *_address;
    NSString *_label;
}

+ (id)objectWithWFSerializedRepresentation:(id)arg1;
+ (id)addressWithEmailAddress:(id)arg1 label:(id)arg2;
+ (id)addressWithEmailAddress:(id)arg1;
+ (id)addressesWithMailtoURL:(id)arg1;
+ (id)addressesWithTextCheckingResult:(id)arg1;
+ (BOOL)stringContainsEmailAddresses:(id)arg1;
+ (id)emailAddressesInString:(id)arg1 error:(id *)arg2;
- (void).cxx_destruct;
@property(readonly, nonatomic) NSString *label; // @synthesize label=_label;
@property(readonly, nonatomic) NSString *address; // @synthesize address=_address;
- (id)wfSerializedRepresentation;
@property(readonly, copy, nonatomic) NSString *wfName;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (long long)compare:(id)arg1;
@property(readonly) unsigned long long hash;
- (BOOL)isEqual:(id)arg1;
@property(readonly, nonatomic) NSString *localizedLabel;
- (id)initWithAddress:(id)arg1 label:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) Class superclass;

@end

