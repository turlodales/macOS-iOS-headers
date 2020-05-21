//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <Automator/AMTextFieldCell.h>

@class NSImage;

@interface AMImageTextCell : AMTextFieldCell
{
    NSImage *_image;
}

- (void).cxx_destruct;
- (void)setImage:(id)arg1;
- (id)image;
- (struct CGSize)cellSize;
- (void)drawWithFrame:(struct CGRect)arg1 inView:(id)arg2;
- (void)selectWithFrame:(struct CGRect)arg1 inView:(id)arg2 editor:(id)arg3 delegate:(id)arg4 start:(long long)arg5 length:(long long)arg6;
- (BOOL)isEditable;
- (BOOL)isSelectable;
- (BOOL)isEnabled;
- (id)copyWithZone:(struct _NSZone *)arg1;

@end

