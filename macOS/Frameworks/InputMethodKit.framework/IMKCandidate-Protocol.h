//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class IMKDocumentContent, NSString;

@protocol IMKCandidate <NSObject>
@property(readonly, nonatomic) unsigned long long type;
@property(readonly, copy, nonatomic) IMKDocumentContent *documentContentToReplace;
@property(copy, nonatomic) NSString *annotation;
@property(readonly, copy, nonatomic) NSString *text;
@property(readonly, copy, nonatomic) NSString *displayText;
@end

