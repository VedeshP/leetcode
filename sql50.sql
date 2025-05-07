-- My solutions for the sql 50 study plan on leetcode

-- 1683. Invalid Tweets
SELECT TWEET_ID 
FROM TWEETS 
WHERE LENGTH(CONTENT) > 15