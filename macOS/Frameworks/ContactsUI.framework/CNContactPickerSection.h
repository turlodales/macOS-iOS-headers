//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString, NSView;

@interface CNContactPickerSection : NSObject
{
    NSString *_identifier;
    NSString *_displayName;
    NSView *_contentView;
    NSView *_rightTopBarView;
    id <CNContactPickerSectionDelegate> _delegate;
}

@property(readonly) id <CNContactPickerSectionDelegate> delegate; // @synthesize delegate=_delegate;
@property(readonly) NSView *rightTopBarView; // @synthesize rightTopBarView=_rightTopBarView;
@property(readonly) NSView *contentView; // @synthesize contentView=_contentView;
@property(readonly) NSString *displayName; // @synthesize displayName=_displayName;
@property(readonly) NSString *identifier; // @synthesize identifier=_identifier;
- (void).cxx_destruct;
- (id)description;
- (id)initWithDisplayName:(id)arg1 contentView:(id)arg2 rightTopBarView:(id)arg3 delegate:(id)arg4;
- (id)initWithDisplayName:(id)arg1 contentView:(id)arg2 rightTopBarView:(id)arg3;

@end

