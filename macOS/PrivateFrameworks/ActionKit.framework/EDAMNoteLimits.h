//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <ActionKit/FATObject.h>

@class NSNumber;

@interface EDAMNoteLimits : FATObject
{
    NSNumber *_noteResourceCountMax;
    NSNumber *_uploadLimit;
    NSNumber *_resourceSizeMax;
    NSNumber *_noteSizeMax;
    NSNumber *_uploaded;
}

+ (id)structFields;
+ (id)structName;
- (void).cxx_destruct;
@property(retain, nonatomic) NSNumber *uploaded; // @synthesize uploaded=_uploaded;
@property(retain, nonatomic) NSNumber *noteSizeMax; // @synthesize noteSizeMax=_noteSizeMax;
@property(retain, nonatomic) NSNumber *resourceSizeMax; // @synthesize resourceSizeMax=_resourceSizeMax;
@property(retain, nonatomic) NSNumber *uploadLimit; // @synthesize uploadLimit=_uploadLimit;
@property(retain, nonatomic) NSNumber *noteResourceCountMax; // @synthesize noteResourceCountMax=_noteResourceCountMax;

@end

