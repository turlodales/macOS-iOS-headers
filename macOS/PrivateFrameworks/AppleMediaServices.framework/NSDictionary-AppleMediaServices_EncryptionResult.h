//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSDictionary.h"

#import "AMSHashable.h"

@class NSString;

@interface NSDictionary (AppleMediaServices_EncryptionResult) <AMSHashable>
+ (id)ams_dictionaryWithEncryptionResult:(CDStruct_0f015c83)arg1;
- (CDStruct_0f015c83)ams_encryptionResult;
- (id)ams_objectForKey:(id)arg1 defaultValue:(id)arg2;
- (id)ams_objectForCaseInsensitiveKey:(id)arg1;
- (id)ams_mapWithTransform:(CDUnknownBlockType)arg1;
- (id)ams_firstObjectPassingTest:(CDUnknownBlockType)arg1;
- (id)ams_firstKeyObjectPassingTest:(CDUnknownBlockType)arg1;
- (id)ams_firstKeyPassingTest:(CDUnknownBlockType)arg1;
- (id)ams_filterUsingTest:(CDUnknownBlockType)arg1;
- (id)ams_dictionaryByAddingEntriesFromDictionary:(id)arg1;
- (id)ams_componentsJoinedByString:(id)arg1;
- (id)ams_arrayUsingTransform:(CDUnknownBlockType)arg1;
@property(readonly) NSString *hashedDescription;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@end

