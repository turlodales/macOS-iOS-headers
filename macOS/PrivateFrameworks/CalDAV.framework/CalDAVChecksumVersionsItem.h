//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <CoreDAV/CoreDAVItem.h>

@class NSMutableSet;

@interface CalDAVChecksumVersionsItem : CoreDAVItem
{
    NSMutableSet *_versionStringsSupported;
}

- (void).cxx_destruct;
- (id)copyParseRules;
- (BOOL)supportsVersion:(id)arg1;
- (void)addVersionSupported:(id)arg1;
- (id)init;

@end

