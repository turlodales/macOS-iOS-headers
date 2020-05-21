//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "EFLoggable.h"

@class NSString;

@interface EAEmailAddressParser : NSObject <EFLoggable>
{
}

+ (id)_stringByEncodingIDNAString:(id)arg1 inRange:(struct _NSRange)arg2;
+ (id)_stringByDecodingIDNAString:(id)arg1 inRange:(struct _NSRange)arg2;
+ (struct _NSRange)rangeOfAddressDomainFromAddress:(id)arg1;
+ (id)idnaEncodedAddressForAddress:(id)arg1;
+ (id)idnaDecodedAddressForAddress:(id)arg1;
+ (void)insertPreviousRoute:(unsigned short *)arg1 ofLength:(unsigned long long)arg2 toBuffer:(unsigned short **)arg3 ofLength:(unsigned long long)arg4 atPosition:(unsigned short *)arg5 addSpace:(BOOL)arg6;
+ (id)displayNameFromAddress:(id)arg1 cacheResults:(BOOL)arg2;
+ (id)displayNameFromAddress:(id)arg1;
+ (void)_componentsForFullAddress:(id)arg1 rawAddressIndexes:(id *)arg2 localPartIndexes:(id *)arg3 domainIndexes:(id *)arg4;
+ (id)addressDomainFromAddress:(id)arg1;
+ (id)localPartFromAddress:(id)arg1;
+ (id)rawAddressRespectingGroupsFromFullAddress:(id)arg1;
+ (id)rawAddressFromFullAddress:(id)arg1 cacheResults:(BOOL)arg2;
+ (id)rawAddressFromFullAddress:(id)arg1;
+ (BOOL)addressIsEmptyGroup:(id)arg1;
+ (BOOL)isLegalEmailAddress:(id)arg1;
+ (id)log;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

