//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "CNFoundationUserDefaults.h"

@class ABUserDefaults, NSString;

__attribute__((visibility("hidden")))
@interface ABUserDefaultsCNAdapter : NSObject <CNFoundationUserDefaults>
{
    ABUserDefaults *_userDefaults;
}

+ (id)adapterWithUserDefaults:(id)arg1;
- (id)countryCode;
- (unsigned long long)sortOrder;
@property(nonatomic, getter=isShortNameFormatEnabled) BOOL shortNameFormatEnabled;
@property unsigned long long shortNameFormat;
@property BOOL preferNickname;
- (unsigned long long)newContactNameOrder;
@property unsigned long long nameOrder;
- (void)dealloc;
- (id)initWithUserDefaults:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

