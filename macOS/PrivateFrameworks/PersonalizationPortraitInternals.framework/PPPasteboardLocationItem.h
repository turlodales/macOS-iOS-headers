//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSDate, NSDictionary, NSString;

@interface PPPasteboardLocationItem : NSObject
{
    NSString *_text;
    NSString *_bundleIdentifier;
    NSDate *_createdAt;
    NSDictionary *_addressComponents;
}

- (void).cxx_destruct;
@property(copy, nonatomic) NSDictionary *addressComponents; // @synthesize addressComponents=_addressComponents;
@property(copy, nonatomic) NSDate *createdAt; // @synthesize createdAt=_createdAt;
@property(copy, nonatomic) NSString *bundleIdentifier; // @synthesize bundleIdentifier=_bundleIdentifier;
@property(copy, nonatomic) NSString *text; // @synthesize text=_text;

@end

