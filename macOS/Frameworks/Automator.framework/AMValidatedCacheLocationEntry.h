//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Automator/AMCacheLocationEntry.h>

@class NSData, NSMutableDictionary, NSMutableString;

@interface AMValidatedCacheLocationEntry : AMCacheLocationEntry
{
    NSData *_propertyListData;
    NSMutableDictionary *_actionBundleIDListsByActionType;
    NSMutableString *_plistKeyPathMutableString;
}

- (void).cxx_destruct;
@property(retain) NSMutableString *plistKeyPathMutableString; // @synthesize plistKeyPathMutableString=_plistKeyPathMutableString;
@property(retain) NSData *propertyListData; // @synthesize propertyListData=_propertyListData;
- (BOOL)needsWrite;
- (id)actionWithBundleIdentifier:(id)arg1;
- (id)valueForKey:(id)arg1 forActionWithBundleIdentifier:(id)arg2;
- (id)_generateActionsForActionType:(id)arg1;
- (id)cacheDictionaryForAction:(id)arg1;
- (id)_generateActionForBundleID:(id)arg1 actionType:(id)arg2 propertyListData:(id)arg3;
- (id)_actionBundleIDListForActionType:(id)arg1;
- (id)initWithURL:(id)arg1 propertyListData:(id)arg2;
- (id)_dateFromPropertyListData:(id)arg1 forKey:(id)arg2;

@end

