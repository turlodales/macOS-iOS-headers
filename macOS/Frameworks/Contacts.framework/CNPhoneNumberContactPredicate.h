//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <Contacts/CNPredicate.h>

#import "CNCDContactPredicate.h"
#import "CNSuggestedContactPredicate.h"

@class CNPhoneNumber, NSString;

__attribute__((visibility("hidden")))
@interface CNPhoneNumberContactPredicate : CNPredicate <CNCDContactPredicate, CNSuggestedContactPredicate>
{
    BOOL _returnsMultipleResults;
    CNPhoneNumber *_phoneNumber;
}

+ (BOOL)supportsSecureCoding;
@property(readonly, nonatomic) BOOL returnsMultipleResults; // @synthesize returnsMultipleResults=_returnsMultipleResults;
@property(readonly, copy, nonatomic) CNPhoneNumber *phoneNumber; // @synthesize phoneNumber=_phoneNumber;
@property(readonly, copy) NSString *description;
- (void)encodeWithCoder:(id)arg1;
- (void)dealloc;
- (id)initWithCoder:(id)arg1;
- (id)initWithPhoneNumber:(id)arg1 returnMultipleResults:(BOOL)arg2;
- (BOOL)includeResult:(id)arg1;
- (id)cn_coreDataPredicate;
- (id)sgContactMatchesWithSortOrder:(long long)arg1 mutableObjects:(BOOL)arg2 service:(id)arg3 error:(id *)arg4;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

