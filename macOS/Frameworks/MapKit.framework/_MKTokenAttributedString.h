//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSAttributedString, NSString;

__attribute__((visibility("hidden")))
@interface _MKTokenAttributedString : NSObject
{
    NSAttributedString *_attributedString;
    NSString *_string;
}

- (void).cxx_destruct;
@property(copy, nonatomic) NSString *string; // @synthesize string=_string;
@property(copy, nonatomic) NSAttributedString *attributedString; // @synthesize attributedString=_attributedString;
- (id)description;
- (BOOL)isEmpty;

@end

