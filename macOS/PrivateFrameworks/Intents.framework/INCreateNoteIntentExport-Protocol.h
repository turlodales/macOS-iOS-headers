//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "JSExport.h"
#import "NSObject.h"

@class INNoteContent, INSpeakableString;

@protocol INCreateNoteIntentExport <NSObject, JSExport>
@property(copy) INSpeakableString *groupName;
@property(copy) INNoteContent *content;
@property(copy) INSpeakableString *title;
- (id)init;
@end

