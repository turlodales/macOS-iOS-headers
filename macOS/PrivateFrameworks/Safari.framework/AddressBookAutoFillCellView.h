//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Safari/ColorInvertingTableCellView.h>

@class NSString, NSTextField;

__attribute__((visibility("hidden")))
@interface AddressBookAutoFillCellView : ColorInvertingTableCellView
{
    NSString *_prompt;
    NSString *_contactName;
    NSTextField *_promptLabel;
    NSTextField *_contactNameLabel;
}

+ (struct CGSize)sizeWithPrompt:(id)arg1 contactName:(id)arg2;
- (void).cxx_destruct;
@property(nonatomic) __weak NSTextField *contactNameLabel; // @synthesize contactNameLabel=_contactNameLabel;
@property(nonatomic) __weak NSTextField *promptLabel; // @synthesize promptLabel=_promptLabel;
@property(copy, nonatomic) NSString *contactName; // @synthesize contactName=_contactName;
@property(copy, nonatomic) NSString *prompt; // @synthesize prompt=_prompt;
- (void)awakeFromNib;

@end

