//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSDictionary, NSString;

@interface KHEditorDisplayFilter : NSObject
{
    BOOL _isDefault;
    NSString *_localizedTitle;
    NSDictionary *_userInfo;
    long long _tag;
    NSString *_accessibilityHelp;
}

+ (id)filterWithTitle:(id)arg1;
- (void).cxx_destruct;
@property(copy) NSString *accessibilityHelp; // @synthesize accessibilityHelp=_accessibilityHelp;
@property long long tag; // @synthesize tag=_tag;
@property BOOL isDefault; // @synthesize isDefault=_isDefault;
@property(retain) NSDictionary *userInfo; // @synthesize userInfo=_userInfo;
@property(readonly, copy) NSString *localizedTitle; // @synthesize localizedTitle=_localizedTitle;
- (id)init;
- (id)initWithTitle:(id)arg1;

@end

