//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <ShareKit/SHKShareTextView.h>

@class NSDictionary, NSString;

__attribute__((visibility("hidden")))
@interface SHKNCShareTextView : SHKShareTextView
{
    NSString *_storedPlaceholderString;
    NSDictionary *_placeholderAttributes;
}

- (void).cxx_destruct;
- (struct CGSize)textContainerInset;
- (struct CGPoint)textContainerOrigin;
- (id)_placeholderStringAttributesWithAttributes:(id)arg1;
- (void)setPlaceholderString:(id)arg1;
- (void)awakeFromNib;
- (id)font;

@end

