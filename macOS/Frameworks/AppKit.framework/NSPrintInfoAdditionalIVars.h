//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSData, NSPrintInfoDictionaryProxy;

__attribute__((visibility("hidden")))
@interface NSPrintInfoAdditionalIVars : NSObject
{
    struct OpaquePMPrintSession *printSession;
    struct OpaquePMPageFormat *pageFormat;
    struct OpaquePMPrintSettings *printSettings;
    NSData *flattenedPageFormatData;
    NSData *flattenedPrintSettingsData;
    BOOL printSessionIsReconciled;
    BOOL pageFormatIsReconciled;
    BOOL printSettingsIsReconciled;
    BOOL pageFormatIsValidated;
    BOOL printSettingsIsValidated;
    NSPrintInfoDictionaryProxy *attributesDictionaryProxy;
    NSPrintInfoDictionaryProxy *printSettingsDictionaryProxy;
    BOOL printerWasSetExplicitly;
}

@end

