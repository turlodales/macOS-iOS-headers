//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface ISDialogTextField : NSObject
{
    long long _keyboardType;
    BOOL _secure;
    NSString *_title;
    NSString *_value;
}

+ (id)textFieldWithTitle:(id)arg1;
- (void).cxx_destruct;
@property(retain) NSString *value; // @synthesize value=_value;
@property(retain) NSString *title; // @synthesize title=_title;
@property(getter=isSecure) BOOL secure; // @synthesize secure=_secure;
@property long long keyboardType; // @synthesize keyboardType=_keyboardType;

@end

