//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSMutableString, NSString;

@interface MSVLyricsXMLElement : NSObject
{
    NSString *_elementName;
    NSString *_identifier;
    NSMutableString *_mutableText;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSMutableString *mutableText; // @synthesize mutableText=_mutableText;
@property(copy, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
@property(copy, nonatomic) NSString *elementName; // @synthesize elementName=_elementName;
- (id)description;

@end

