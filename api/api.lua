local api = {}
function api.spawn(cmd)
    os.execute(cmd .. " &")
end
return api

