//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString;

@interface ENNoteContent : NSObject
{
    NSString *_emml;
}

+ (id)noteContentWithENML:(id)arg1;
+ (id)noteContentWithSanitizedHTML:(id)arg1;
+ (id)noteContentWithContentArray:(id)arg1;
+ (id)noteContentWithString:(id)arg1;
- (void).cxx_destruct;
@property(copy, nonatomic) NSString *emml; // @synthesize emml=_emml;
- (id)enml;
- (id)enmlWithNote:(id)arg1;
- (id)initWithENML:(id)arg1;

@end

