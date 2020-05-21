//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSString.h"

#import "WFJSONObject.h"
#import "WFJavaScriptCoreBridgeableObject.h"
#import "WFNaming.h"
#import "WFPropertyListObject.h"

@interface NSString (WFFilenameUtilities) <WFPropertyListObject, WFNaming, WFJavaScriptCoreBridgeableObject, WFJSONObject>
+ (id)wf_datedFilenameWithTypeString:(id)arg1 fileExtension:(id)arg2;
+ (id)wf_stringWithData:(id)arg1;
- (id)wf_filenameTruncatedToMaximumLength;
- (id)wf_filenameTruncatedToMaximumLengthWithSuffix:(id)arg1;
- (id)gtm_stringByUnescapingFromHTML;
- (id)gtm_stringByEscapingForAsciiHTML;
- (id)gtm_stringByEscapingForHTML;
- (id)gtm_stringByEscapingHTMLUsingTable:(CDStruct_6a59ab51 *)arg1 ofSize:(unsigned long long)arg2 escapingUnicode:(BOOL)arg3;
@property(readonly, copy, nonatomic) NSString *wfName;
- (id)wf_stringByTrimmingTrailingWhitespaceAndNewlineCharacters;
- (id)wf_stringByTrimmingLeadingWhitespaceAndNewlineCharacters;
- (id)wf_stringByTrimmingTrailingCharactersInSet:(id)arg1;
- (id)wf_stringByTrimmingLeadingCharactersInSet:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@end

