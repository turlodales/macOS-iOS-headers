//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "ECEmailAddressConvertible.h"
#import "EFPubliclyDescribable.h"
#import "NSCopying.h"

@class ECEmailAddress, NSArray, NSString;

@interface ECEmailAddressComponents : NSObject <ECEmailAddressConvertible, EFPubliclyDescribable, NSCopying>
{
    NSString *_simpleAddress;
    NSString *_localPart;
    NSString *_domain;
    NSString *_idnaDomain;
    NSArray *_groupList;
    NSString *_displayName;
}

+ (id)componentsWithEmailAddress:(id)arg1;
+ (id)componentsWithString:(id)arg1;
- (void).cxx_destruct;
@property(copy) NSString *displayName; // @synthesize displayName=_displayName;
@property(readonly) NSString *stringValue;
@property(readonly) ECEmailAddress *emailAddressValue;
@property(readonly) NSString *simpleAddress; // @synthesize simpleAddress=_simpleAddress;
- (BOOL)_nts_isValid;
- (BOOL)_nts_isValidDomain;
- (BOOL)_nts_getValidatedLocalPart:(id *)arg1 domain:(id *)arg2 idnaDomain:(id *)arg3 displayName:(id *)arg4;
- (BOOL)_nts_getValidatedDomain:(id *)arg1 idnaDomain:(id *)arg2 avoidReparse:(BOOL)arg3;
@property(copy) NSArray *groupList; // @synthesize groupList=_groupList;
@property(copy, setter=setIDNADomain:) NSString *idnaDomain; // @synthesize idnaDomain=_idnaDomain;
@property(copy) NSString *domain; // @synthesize domain=_domain;
@property(copy) NSString *localPart; // @synthesize localPart=_localPart;
- (BOOL)isEqual:(id)arg1;
@property(readonly) unsigned long long hash;
@property(readonly, copy, nonatomic) NSString *ef_publicDescription;
@property(readonly, copy) NSString *description;
@property(readonly, copy) NSString *debugDescription;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithEmailAddress:(id)arg1;
- (id)initWithString:(id)arg1;
- (id)_initWithString:(id)arg1 displayName:(id)arg2 localPart:(id)arg3 domain:(id)arg4 groupList:(id)arg5;
- (id)init;
@property(readonly, copy) NSString *idnaAddress;

// Remaining properties
@property(readonly) Class superclass;

@end

