//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface ACSHKeyboardCapInfo : NSObject
{
    BOOL _isDeadKey;
    NSString *_keyCapString;
}

+ (id)keyboardCapInfoWithKeyCapString:(id)arg1 isDeadKey:(BOOL)arg2;
- (void).cxx_destruct;
@property BOOL isDeadKey; // @synthesize isDeadKey=_isDeadKey;
@property(copy) NSString *keyCapString; // @synthesize keyCapString=_keyCapString;

@end

