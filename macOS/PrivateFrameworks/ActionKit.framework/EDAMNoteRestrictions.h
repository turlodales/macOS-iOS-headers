//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ActionKit/FATObject.h>

@class NSNumber;

@interface EDAMNoteRestrictions : FATObject
{
    NSNumber *_noUpdateTitle;
    NSNumber *_noUpdateContent;
    NSNumber *_noEmail;
    NSNumber *_noShare;
    NSNumber *_noSharePublicly;
}

+ (id)structFields;
+ (id)structName;
- (void).cxx_destruct;
@property(retain, nonatomic) NSNumber *noSharePublicly; // @synthesize noSharePublicly=_noSharePublicly;
@property(retain, nonatomic) NSNumber *noShare; // @synthesize noShare=_noShare;
@property(retain, nonatomic) NSNumber *noEmail; // @synthesize noEmail=_noEmail;
@property(retain, nonatomic) NSNumber *noUpdateContent; // @synthesize noUpdateContent=_noUpdateContent;
@property(retain, nonatomic) NSNumber *noUpdateTitle; // @synthesize noUpdateTitle=_noUpdateTitle;

@end

