//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

@class CKConversation, CKConversationSearcher, NSString, UITableView, UIViewController;

@protocol CKConversationSearcherDelegate
- (void)searcher:(CKConversationSearcher *)arg1 userDidSelectChatGUID:(NSString *)arg2 messageGUID:(NSString *)arg3;
- (CKConversation *)searcher:(CKConversationSearcher *)arg1 conversationForChatGUID:(NSString *)arg2;
- (UIViewController *)searcherContentsController:(CKConversationSearcher *)arg1;

@optional
- (void)searcher:(CKConversationSearcher *)arg1 didHideSearchResultsTableView:(UITableView *)arg2;
- (void)searcher:(CKConversationSearcher *)arg1 willHideSearchResultsTableView:(UITableView *)arg2;
- (void)searcher:(CKConversationSearcher *)arg1 didShowSearchResultsTableView:(UITableView *)arg2;
- (void)searcher:(CKConversationSearcher *)arg1 willShowSearchResultsTableView:(UITableView *)arg2;
- (void)searcherDidEndSearch:(CKConversationSearcher *)arg1;
- (void)searcherWillEndSearch:(CKConversationSearcher *)arg1;
- (void)searcherDidBeginSearch:(CKConversationSearcher *)arg1;
- (void)searcherWillBeginSearch:(CKConversationSearcher *)arg1;
@end

