//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "SAIntentGroupGetAppInfo.h"

@interface SAIntentGroupGetAppInfo (INSExtensionService)
- (long long)ins_analyticsEndEventType;
- (long long)ins_analyticsBeginEventType;
- (id)_createOrderedAppInfoListFromDictionary:(id)arg1;
- (void)_searchAppStoreWithAppIdentifyingInfo:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (id)_searchLocallyWithAppIdentifyingInfo:(id)arg1 forSiriLanguageCode:(id)arg2;
- (void)ins_getAppInfoForSiriLanguage:(id)arg1 withCompletion:(CDUnknownBlockType)arg2;
@end

